// clang-format off
// Generated file (from: concat_float_2_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace concat_float_2_relaxed {
// Generated concat_float_2_relaxed test
#include "generated/examples/concat_float_2_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/concat_float_2_relaxed.model.cpp"
} // namespace concat_float_2_relaxed

TEST_F(GeneratedTests, concat_float_2_relaxed) {
    execute(concat_float_2_relaxed::CreateModel,
            concat_float_2_relaxed::is_ignored,
            concat_float_2_relaxed::get_examples());
}

TEST_F(DynamicOutputShapeTest, concat_float_2_relaxed_dynamic_output_shape) {
    execute(concat_float_2_relaxed::CreateModel_dynamic_output_shape,
            concat_float_2_relaxed::is_ignored_dynamic_output_shape,
            concat_float_2_relaxed::get_examples_dynamic_output_shape());
}

