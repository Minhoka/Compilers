#ifndef __ZU_PF_SIZE_H__
#define __ZU_PF_SIZE_H__

#include <string>
#include <iostream>
#include <cdk/symbol_table.h>
#include <cdk/emitters/basic_postfix_emitter.h>
#include "targets/basic_ast_visitor.h"
#include "targets/symbol.h"

namespace zu {

    class postfix_size : public basic_ast_visitor {
        int _value;
        public:
          postfix_size(std::shared_ptr<cdk::compiler> compiler):
				basic_ast_visitor(compiler), _value(0) {}

          ~postfix_size() {}

          int value(){ return _value; }
          void do_sequence_node(cdk::sequence_node * const node, int lvl);
          void do_double_node(cdk::double_node * const node, int lvl);
          void do_integer_node(cdk::integer_node * const node, int lvl);
          void do_string_node(cdk::string_node * const node, int lvl);
          void do_neg_node(cdk::neg_node * const node, int lvl);
          void do_add_node(cdk::add_node * const node, int lvl);
          void do_sub_node(cdk::sub_node * const node, int lvl);
          void do_mul_node(cdk::mul_node * const node, int lvl);
          void do_div_node(cdk::div_node * const node, int lvl);
          void do_mod_node(cdk::mod_node * const node, int lvl);
          void do_lt_node(cdk::lt_node * const node, int lvl);
          void do_le_node(cdk::le_node * const node, int lvl);
          void do_ge_node(cdk::ge_node * const node, int lvl);
          void do_gt_node(cdk::gt_node * const node, int lvl);
          void do_ne_node(cdk::ne_node * const node, int lvl);
          void do_eq_node(cdk::eq_node * const node, int lvl);
          void do_if_node(zu::if_node * const node, int lvl);
          void do_pos_node(zu::pos_node * const node, int lvl);
          void do_if_else_node(zu::if_else_node * const node, int lvl);
          void do_lvalue_node(zu::lvalue_node * const node, int lvl);
          void do_rvalue_node(zu::rvalue_node * const node, int lvl);
          void do_evaluation_node(zu::evaluation_node * const node, int lvl);
          void do_print_node(zu::print_node * const node, int lvl);
          void do_read_node(zu::read_node * const node, int lvl);
          void do_assignment_node(zu::assignment_node * const node, int lvl);
          void do_println_node(zu::println_node * const node, int lvl);
          void do_break_node(zu::break_node * const node, int lvl);
          void do_continue_node(zu::continue_node * const node, int lvl);
          void do_or_node(zu::or_node * const node, int lvl);
          void do_and_node(zu::and_node * const node, int lvl);
          void do_for_node(zu::for_node * const node, int lvl);
          void do_return_node(zu::return_node * const node, int lvl);
          void do_not_node(zu::not_node * const node, int lvl);
          void do_variable_node(zu::variable_node * const node, int lvl);
          void do_variable_def_node(zu::variable_def_node * const node, int lvl);
          void do_variable_dec_node(zu::variable_dec_node * const node, int lvl);
          void do_function_call_node(zu::function_call_node * const node, int lvl);
          void do_function_def_node(zu::function_def_node * const node, int lvl);
          void do_function_dec_node(zu::function_dec_node * const node, int lvl);
          void do_id_node(zu::id_node * const node, int lvl);
          void do_index_node(zu::index_node * const node, int lvl);
          void do_malloc_node(zu::malloc_node * const node, int lvl);
  };

} // zu

#endif
