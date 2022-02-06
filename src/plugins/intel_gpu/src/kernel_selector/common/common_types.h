// Copyright (C) 2018-2022 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <cstddef>
#include <cstdint>

namespace kernel_selector {
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// KernelType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class KernelType {
    UNKNOWN,
    ARG_MAX_MIN,
    AVERAGE_UNPOOLING,
    CONVOLUTION,
    DECONVOLUTION,
    LRN,
    NORMALIZE,
    POOLING,
    RANGE,
    ROI_POOLING,
    ROI_ALIGN,
    FULLY_CONNECTED,
    ACTIVATION,
    SOFT_MAX,
    ELTWISE,
    SCALE,
    REORDER,
    RESHAPE,
    PERMUTE,
    CONCATENATION,
    RESAMPLE,
    REGION_YOLO,
    REORG_YOLO,
    MAX_UNPOOLING,
    MVN,
    LSTM_GEMM,
    LSTM_ELT,
    BORDER,
    TILE,
    SELECT,
    BROADCAST,
    GEMM,
    PYRAMID_ROI_ALIGN,
    CONTRACT,
    ONE_HOT,
    GATHER,
    GATHER_ND,
    GATHER_ELEMENTS,
    SCATTER_UPDATE,
    SCATTER_ND_UPDATE,
    SCATTER_ELEMENTS_UPDATE,
    DEPTH_TO_SPACE,
    BATCH_TO_SPACE,
    SHUFFLE_CHANNELS,
    SLICE,
    STRIDED_SLICE,
    REVERSE_SEQUENCE,
    BINARY_CONVOLUTION,
    QUANTIZE,
    LSTM_DYNAMIC_INPUT,
    LSTM_DYNAMIC_TIMELOOP,
    REDUCE,
    GATHER_TREE,
    SPACE_TO_DEPTH,
    SPACE_TO_BATCH,
    GRN,
    CTC_GREEDY_DECODER,
    CUM_SUM,
    EMBEDDING_BAG,
    EXTRACT_IMAGE_PATCHES,
    LOOP,
    NON_MAX_SUPPRESSION,
    DETECTION_OUTPUT,
    EXPERIMENTAL_DETECTRON_ROI_FEATURE_EXTRACTOR,
    CONVERT_COLOR,
    RANDOM_UNIFORM
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Datatype
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class Datatype {
    UNSUPPORTED,
    BINARY,
    INT8,
    UINT8,
    INT16,
    UINT16,
    INT32,
    UINT32,
    INT64,
    F16,
    F32,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WeightsType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class WeightsType {
    UNSUPPORTED,
    BINARY,
    F16,
    F32,
    INT8,
    UINT8,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// NonLinearActivation
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ActivationFunction {
    LOGISTIC,
    HYPERBOLIC_TAN,
    RELU,
    RELU_NEGATIVE_SLOPE,
    CLAMP,
    SOFTRELU,
    ABS,
    SQUARE,
    SQRT,
    LINEAR,
    ELU,
    SIN,
    ASIN,
    SINH,
    ASINH,
    COS,
    ACOS,
    COSH,
    LOG,
    ACOSH,
    LOG2,
    EXP,
    NONE,
    TAN,
    ATAN,
    ATANH,
    FLOOR,
    CEIL,
    NEGATIVE,
    NOT,
    POW,
    ERF,
    HARD_SIGMOID,
    HSIGMOID,
    RECIPROCAL,
    SELU,
    SIGN,
    SOFTPLUS,
    SOFTSIGN,
    SWISH,
    HSWISH,
    MISH,
    GELU,
    GELU_TANH,
    ROUND_HALF_TO_EVEN,
    ROUND_HALF_AWAY_FROM_ZERO
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PoolType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class PoolType {
    MAX,
    AVG,
    MAX_WITH_ARGMAX,
    BILINEAR,
    DEFORMABLE_BILINEAR
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PoolRemainder
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class PoolRemainder {
    FLOOR,
    CEIL
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// LRNMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class LRNMode {
    ACROSS_CHANNEL,
    WITHIN_CHANNEL
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// LookUpTableAxis
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class LookUpTableAxis {
    BATCH,
    FEATURE,
    X,
    Y,
    XYF
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EmbedAxis
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class EmbedAxis {
    BATCH,
    FEATURE,
    X,
    Y,
    XYF
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ArgMaxMinDim
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ArgMaxMinAxis {
    BATCH,
    FEATURE,
    X,
    Y,
    Z,
    XYF
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ArgMaxMinOut
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ArgMaxMinOut {
    MAX,
    MIN
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ArgMaxMinSortType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ArgMaxMinSortType {
    VALUE,
    INDEX
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// NormalizeMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class NormalizeMode {
    ACROSS_SPATIAL,
    WITHIN_SPATIAL
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MVNMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class MVNMode {
    ACROSS_CHANNELS,
    WITHIN_CHANNELS
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MVNEpsMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class MVNEpsMode {
    INSIDE_SQRT,
    OUTSIDE_SQRT
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// LRNMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class KernelDividerMode {
    DONT_CARE,
    FIXED,
    DYNAMIC,
    DYNAMIC_WITH_PADDING
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EltwiseMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class EltwiseMode {
    ADD,
    SUB,
    MUL,
    DIV,
    MIN,
    MAX,
    POW,
    MODULU,
    SQRT,
    RSQRT,
    ASSIGN,
    EQ,
    NE,
    LT,
    LE,
    GT,
    GE,
    LOGIC_AND,
    LOGIC_OR,
    LOGIC_XOR,
    SQUARED_DIFF,
    FLOOR_MOD
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EltwiseInputMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class EltwiseInputMode {
    SCALAR,
    INPUT_BUFFER,
    UNORDERED_ACCESS_INPUT_BUFFER,
    INTERMEDIATE_RESULTS_INDEX,
    OUTPUT_BUFFER
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SoftmaxDim
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class SoftmaxDim {
    X,
    Y,
    Z,
    FEATURE,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ReorderMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ReorderMode {
    xyzw,  // Do nothing
    xywz,
    xwyz,
    wxyz,
    xzyw,
    zyxw,
    yxzw,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MeanSubsructMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class MeanSubtractMode {
    NONE,
    INSIDE_PARAMS,  // the index is feature id (modulu size)
    IN_BUFFER,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MeanOp
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class MeanOp {
    NONE,
    SUB,
    MUL,
    DIV,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ConcatAxis
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ConcatAxis {
    X,
    Y,
    Z,
    W,
    FEATURE,
    BATCH
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DepthToSpaceMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class DepthToSpaceMode {
    BLOCKS_FIRST,
    DEPTH_FIRST,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ResampleType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ResampleType {
    NEAREST_NEIGHBOR,
    BILINEAR_INTERP,
    CAFFE_BILINEAR_INTERP,
    CUBIC,
    LINEAR_ONNX,
};

enum class CoordinateTransformationMode {
    HALF_PIXEL,
    PYTORCH_HALF_PIXEL,
    ASYMMETRIC,
    TF_HALF_PIXEL_FOR_NN,
    ALIGN_CORNERS,
};

enum class NearestMode {
    ROUND_PREFER_FLOOR,
    ROUND_PREFER_CEIL,
    FLOOR,
    CEIL,
    SIMPLE,
};

enum class ShapeCalculationMode {
    SIZES,
    SCALES,
};

enum class InterpolateAxis {
    X,
    Y,
    Z,
    W,
    FEATURE,
    BATCH
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BorderType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class BorderType {
    CONSTANT,
    EDGE,
    MIRROR,
    MIRROR_101,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// IndexSelectAxis
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class IndexSelectAxis {
    BATCH,
    FEATURE,
    X,
    Y
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Size
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
struct Size {
    T x = 0;
    T y = 0;
    T z = 0;

    Size() = default;
    Size(T x, T y, T z = 1) : x(x), y(y), z(z) {}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DimTensor
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T = std::uint32_t>
struct DimTensor {
    T b = 0;
    T f = 0;
    T w = 0;
    T z = 0;
    T y = 0;
    T x = 0;

    DimTensor() = default;
    DimTensor(T b, T f, T w, T z, T y, T x) : b(b), f(f), w(w), z(z), y(y), x(x) {}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// AutoTunerMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class TuningMode {
    TUNING_DISABLED,         // Tuning is disabled.
    TUNING_USE_CACHE,        // Tuning using the cached data (no on-line tuning for non-existing data).
    TUNING_TUNE_AND_CACHE,   // Tuning using the cached data if exist, tune and update cache otherwise.attention_params
    TUNING_USE_AND_UPDATE,   // Tuning using the cached data and other updating tasks.
                             // Performs updating tasks like removal of invalid caches, promoting to new formats, etc.
                             // No tuning for non-existing data.
    TUNING_RETUNE_AND_CACHE  // Perform tuning even if the cached data exists.
};

inline bool UseCached(const TuningMode& mode) {
    return mode == TuningMode::TUNING_USE_CACHE
        || mode == TuningMode::TUNING_TUNE_AND_CACHE
        || mode == TuningMode::TUNING_USE_AND_UPDATE;
}

inline bool PerformTuning(const TuningMode& mode) {
    return mode == TuningMode::TUNING_TUNE_AND_CACHE
        || mode == TuningMode::TUNING_RETUNE_AND_CACHE;
}

inline bool PerformUpdates(const TuningMode& mode) {
    return mode == TuningMode::TUNING_TUNE_AND_CACHE
        || mode == TuningMode::TUNING_USE_AND_UPDATE
        || mode == TuningMode::TUNING_RETUNE_AND_CACHE;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Aliases:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
using uSize = Size<std::uint32_t>;
using stSize = Size<std::size_t>;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ContractMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ContractMode {
    SUM,
    PRODUCT,
    ALL,
    ANY,
    MAX,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// GatherAxis
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class GatherAxis {
    X,
    Y,
    Z,
    W,
    FEATURE,
    BATCH,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ScatterUpdateAxis
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ScatterUpdateAxis {
    X,
    Y,
    Z,
    W,
    FEATURE,
    BATCH,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ReduceMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class ReduceMode {
    MAX,
    MIN,
    MEAN,
    PROD,
    SUM,
    AND,
    OR,
    SUM_SQUARE,
    L1,
    L2,
    LOG_SUM,
    LOG_SUM_EXP
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// QuantizationType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class QuantizationType {
    NONE,
    SYMMETRIC,
    ASYMMETRIC_WEIGHTS,
    ASYMMETRIC_DATA,
    ASYMMETRIC_DATA_AND_WEIGHTS
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SpaceToDepthMode
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class SpaceToDepthMode {
    DEPTH_FIRST,
    BLOCKS_FIRST
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CumSumAxis
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class CumSumAxis {
    X,
    Y,
    Z,
    W,
    FEATURE,
    BATCH
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EmbeddingBagType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class EmbeddingBagType {
    PACKED_SUM,
    OFFSETS_SUM,
    SEGMENTS_SUM
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BoxEncodingType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class BoxEncodingType {
    BOX_ENCODING_CORNER,
    BOX_ENCODING_CENTER,
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ConvertColor
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum class color_format : uint32_t {
    RGB,       ///< RGB color format
    BGR,       ///< BGR color format, default in DLDT
    RGBX,      ///< RGBX color format with X ignored during inference
    BGRX,      ///< BGRX color format with X ignored during inference
    NV12,      ///< NV12 color format represented as compound Y+UV blob
    I420,      ///< I420 color format represented as compound Y+U+V blob
};

enum class memory_type : uint32_t {
    buffer,
    image
};

}  // namespace kernel_selector