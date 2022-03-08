# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 11:30:03 by mahadad           #+#    #+#              #
#    Updated: 2022/03/08 14:41:07 by mahadad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# _.-=+=-._.-=+=-._[ Var ]_.-=+=-._.-=+=-._ #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)
INCLUDES = -I includes/

GIT_PWD = $(shell pwd)

D = 0
SANI = 0
WRA = 0

ifeq ($(WRA), 1)
INCLUDES += -I includes/debug
CFLAGS += -D WRA
endif

ifeq ($(SANI), 1)
CFLAGS += -fsanitize=address
D = 1
endif

ifeq ($(D), 1)
CFLAGS += -g3
CFLAGS += -D PS_DEBUG=1
endif

# _.-=+=-._.-=+=-._[ Source & Bin ]_.-=+=-._.-=+=-._ #

SRC_DIR		= src/
OBJ_DIR		= obj_$(NAME)/
DEP_LIBFT	= libft/libft.a

DEP_INCLUDE_DIR	= includes/
HEADER			= $(shell find src -type f -name "*.h")
HEADER			+= libft/includes/libft.h
HEADER_DEP		= $(addprefix $(DEP_INCLUDE_DIR), $(notdir $(HEADER)))

SRCS	= \
src/0_parser_init_set/ps_arg_check.c \
src/0_parser_init_set/ps_arg_init.c \
src/1_solve_set/ps_big_solver.c \
src/1_solve_set/ps_solve_set.c \
src/2_stack_init/ps_stack_init.c \
src/3_instruction/instruction_utils/ps_push_all_this_there.c \
src/3_instruction/instruction_utils/ps_push_this_there.c \
src/3_instruction/instruction_utils/ps_rotate_down_stack.c \
src/3_instruction/instruction_utils/ps_rotate_up_stack.c \
src/3_instruction/instruction_utils/ps_swap_this_w_that.c \
src/3_instruction/p/ps_pa.c \
src/3_instruction/p/ps_pb.c \
src/3_instruction/p/ps_ppa.c \
src/3_instruction/p/ps_ppb.c \
src/3_instruction/r/ps_ra.c \
src/3_instruction/r/ps_rb.c \
src/3_instruction/r/ps_rr.c \
src/3_instruction/r/ps_rra.c \
src/3_instruction/r/ps_rrb.c \
src/3_instruction/r/ps_rrr.c \
src/3_instruction/s/ps_sa.c \
src/3_instruction/s/ps_sb.c \
src/3_instruction/s/ps_ss.c \
src/4_solve_stack/a_stack_solve/ps_big_solve.c \
src/4_solve_stack/a_stack_solve/ps_small_solve.c \
src/4_solve_stack/a_stack_solve/ps_small_solve_utils.c \
src/4_solve_stack/ps_check_sort.c \
src/4_solve_stack/ps_solve_stack.c \
src/push_swap.c \
src/utils/ps_exit_prog.c \
src/utils/ps_prog_free.c 

SRC		= $(notdir $(SRCS))
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_DIR), $(OBJ))

VPATH	= $(SRC_DIR) $(OBJ_DIR) libft/includes $(shell find $(SRC_DIR) -type d)

# _.-=+=-._.-=+=-._[ Rules ]_.-=+=-._.-=+=-._ #
.PHONY: all, clean, fclean, re

all: $(DEP_LIBFT) $(DEP_INCLUDE_DIR) $(HEADER_DEP) $(NAME)

$(DEP_LIBFT):
	make SANI=$(SANI) WRA=$(WRA) -C $(dir $(DEP_LIBFT))

$(DEP_INCLUDE_DIR)%.h: %.h
	@ln -s $(GIT_PWD)/$< $@

$(OBJ_DIR)%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\033[32;1m$@\033[32;0m\n"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@printf "\033[32;1m[Create $(OBJ_DIR)]\033[32;0m\n"

$(DEP_INCLUDE_DIR):
	@mkdir -p $(DEP_INCLUDE_DIR)
	@printf "\033[32;1m[Create $(DEP_INCLUDE_DIR)]\033[32;0m\n"

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(DEP_LIBFT) -o $(NAME)
	@printf "\033[32;1m[== Linked OK ==]\033[32;0m\n"
	@printf "\033[32;1m[== $(NAME) Created ! ==]\033[32;0m\n"
	@if [ $D = "1" ]; then printf "\033[31;1m[/!\\ DEBUG ENABLE /!\\]\033[32;0m\n"; fi
	@printf "[Compiled /w this flag $(CFLAGS)]"

clean:
	@make clean -C $(dir $(DEP_LIBFT))
	@rm -rf $(HEADER_DEP)
	@printf "\033[31;1m[Remove $(DEP_INCLUDE_DIR).*h]\033[32;0m\n"
	@rm -rf $(OBJS)
	@printf "\033[31;1m[Remove *.o]\033[32;0m\n"
	@rm -rf $(OBJ_DIR)
	@printf "\033[31;1m[Remove $(OBJ_DIR)]\033[32;0m\n"

fclean: clean
	@make fclean -C $(dir $(DEP_LIBFT))
	@rm -f $(NAME)
	@printf "\033[31;1m[Remove $(NAME)]\033[32;0m\n"

re: fclean all

# _.-=+=-._.-=+=-._[ Dev Tools ]_.-=+=-._.-=+=-._ #
.PHONY: c, cf, r, git, h

h:
	@echo "\033[1J"

c:
	@rm -rf $(OBJS)
	@printf "\033[31;1m[Remove *.o]\033[32;0m\n"
	@rm -rf $(OBJ_DIR)
	@printf "\033[31;1m[Remove $(OBJ_DIR)]\033[32;0m\n"
fc: c
	@rm -f $(NAME)
	@printf "\033[31;1m[Remove $(NAME)]\033[32;0m\n"
r: fc all

sub:
	make SANI=$(SANI) WRA=$(WRA) -C $(dir $(DEP_LIBFT))


git:
	@git pull
	@git status --short
	# @while true; do read -p "Continue [y/N]" resp; if [[ $$resp =~ ^[Yy]$$ ]]; then exit 0; else exit 1; fi; done
	# @git diff
	@-git add .
	@git commit -am "Makefile push `date +'%Y-%m-%d %H:%M:%S'`"
	@-git push