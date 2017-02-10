/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: queries.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "queries.pb-c.h"
void   select_query__init
                     (SelectQuery         *message)
{
  static SelectQuery init_value = SELECT_QUERY__INIT;
  *message = init_value;
}
size_t select_query__get_packed_size
                     (const SelectQuery *message)
{
  assert(message->base.descriptor == &select_query__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t select_query__pack
                     (const SelectQuery *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &select_query__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t select_query__pack_to_buffer
                     (const SelectQuery *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &select_query__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SelectQuery *
       select_query__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SelectQuery *)
     protobuf_c_message_unpack (&select_query__descriptor,
                                allocator, len, data);
}
void   select_query__free_unpacked
                     (SelectQuery *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &select_query__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   sequence_scan__init
                     (SequenceScan         *message)
{
  static SequenceScan init_value = SEQUENCE_SCAN__INIT;
  *message = init_value;
}
size_t sequence_scan__get_packed_size
                     (const SequenceScan *message)
{
  assert(message->base.descriptor == &sequence_scan__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t sequence_scan__pack
                     (const SequenceScan *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &sequence_scan__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t sequence_scan__pack_to_buffer
                     (const SequenceScan *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &sequence_scan__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SequenceScan *
       sequence_scan__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SequenceScan *)
     protobuf_c_message_unpack (&sequence_scan__descriptor,
                                allocator, len, data);
}
void   sequence_scan__free_unpacked
                     (SequenceScan *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &sequence_scan__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   range_table__init
                     (RangeTable         *message)
{
  static RangeTable init_value = RANGE_TABLE__INIT;
  *message = init_value;
}
size_t range_table__get_packed_size
                     (const RangeTable *message)
{
  assert(message->base.descriptor == &range_table__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t range_table__pack
                     (const RangeTable *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &range_table__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t range_table__pack_to_buffer
                     (const RangeTable *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &range_table__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RangeTable *
       range_table__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RangeTable *)
     protobuf_c_message_unpack (&range_table__descriptor,
                                allocator, len, data);
}
void   range_table__free_unpacked
                     (RangeTable *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &range_table__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   expression__column_ref__init
                     (Expression__ColumnRef         *message)
{
  static Expression__ColumnRef init_value = EXPRESSION__COLUMN_REF__INIT;
  *message = init_value;
}
void   expression__operation__init
                     (Expression__Operation         *message)
{
  static Expression__Operation init_value = EXPRESSION__OPERATION__INIT;
  *message = init_value;
}
void   expression__constant__init
                     (Expression__Constant         *message)
{
  static Expression__Constant init_value = EXPRESSION__CONSTANT__INIT;
  *message = init_value;
}
void   expression__init
                     (Expression         *message)
{
  static Expression init_value = EXPRESSION__INIT;
  *message = init_value;
}
size_t expression__get_packed_size
                     (const Expression *message)
{
  assert(message->base.descriptor == &expression__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t expression__pack
                     (const Expression *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &expression__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t expression__pack_to_buffer
                     (const Expression *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &expression__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Expression *
       expression__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Expression *)
     protobuf_c_message_unpack (&expression__descriptor,
                                allocator, len, data);
}
void   expression__free_unpacked
                     (Expression *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &expression__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor select_query__field_descriptors[2] =
{
  {
    "sscan",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(SelectQuery, sscan),
    &sequence_scan__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rtable",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(SelectQuery, n_rtable),
    offsetof(SelectQuery, rtable),
    &range_table__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned select_query__field_indices_by_name[] = {
  1,   /* field[1] = rtable */
  0,   /* field[0] = sscan */
};
static const ProtobufCIntRange select_query__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor select_query__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "SelectQuery",
  "SelectQuery",
  "SelectQuery",
  "",
  sizeof(SelectQuery),
  2,
  select_query__field_descriptors,
  select_query__field_indices_by_name,
  1,  select_query__number_ranges,
  (ProtobufCMessageInit) select_query__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor sequence_scan__field_descriptors[3] =
{
  {
    "table",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(SequenceScan, table),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "target",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(SequenceScan, n_target),
    offsetof(SequenceScan, target),
    &expression__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "qual",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(SequenceScan, qual),
    &expression__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned sequence_scan__field_indices_by_name[] = {
  2,   /* field[2] = qual */
  0,   /* field[0] = table */
  1,   /* field[1] = target */
};
static const ProtobufCIntRange sequence_scan__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor sequence_scan__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "SequenceScan",
  "SequenceScan",
  "SequenceScan",
  "",
  sizeof(SequenceScan),
  3,
  sequence_scan__field_descriptors,
  sequence_scan__field_indices_by_name,
  1,  sequence_scan__number_ranges,
  (ProtobufCMessageInit) sequence_scan__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor range_table__field_descriptors[1] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RangeTable, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned range_table__field_indices_by_name[] = {
  0,   /* field[0] = name */
};
static const ProtobufCIntRange range_table__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor range_table__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RangeTable",
  "RangeTable",
  "RangeTable",
  "",
  sizeof(RangeTable),
  1,
  range_table__field_descriptors,
  range_table__field_indices_by_name,
  1,  range_table__number_ranges,
  (ProtobufCMessageInit) range_table__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor expression__column_ref__field_descriptors[2] =
{
  {
    "table",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Expression__ColumnRef, table),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "column",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Expression__ColumnRef, column),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned expression__column_ref__field_indices_by_name[] = {
  1,   /* field[1] = column */
  0,   /* field[0] = table */
};
static const ProtobufCIntRange expression__column_ref__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor expression__column_ref__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Expression.ColumnRef",
  "ColumnRef",
  "Expression__ColumnRef",
  "",
  sizeof(Expression__ColumnRef),
  2,
  expression__column_ref__field_descriptors,
  expression__column_ref__field_indices_by_name,
  1,  expression__column_ref__number_ranges,
  (ProtobufCMessageInit) expression__column_ref__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor expression__operation__field_descriptors[2] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Expression__Operation, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "arg",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Expression__Operation, n_arg),
    offsetof(Expression__Operation, arg),
    &expression__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned expression__operation__field_indices_by_name[] = {
  1,   /* field[1] = arg */
  0,   /* field[0] = name */
};
static const ProtobufCIntRange expression__operation__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor expression__operation__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Expression.Operation",
  "Operation",
  "Expression__Operation",
  "",
  sizeof(Expression__Operation),
  2,
  expression__operation__field_descriptors,
  expression__operation__field_indices_by_name,
  1,  expression__operation__number_ranges,
  (ProtobufCMessageInit) expression__operation__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor expression__constant__field_descriptors[3] =
{
  {
    "str",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Expression__Constant, str),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "int",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Expression__Constant, has_int_),
    offsetof(Expression__Constant, int_),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "uint",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Expression__Constant, has_uint),
    offsetof(Expression__Constant, uint),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned expression__constant__field_indices_by_name[] = {
  1,   /* field[1] = int */
  0,   /* field[0] = str */
  2,   /* field[2] = uint */
};
static const ProtobufCIntRange expression__constant__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor expression__constant__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Expression.Constant",
  "Constant",
  "Expression__Constant",
  "",
  sizeof(Expression__Constant),
  3,
  expression__constant__field_descriptors,
  expression__constant__field_indices_by_name,
  1,  expression__constant__number_ranges,
  (ProtobufCMessageInit) expression__constant__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor expression__field_descriptors[3] =
{
  {
    "var",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Expression, var),
    &expression__column_ref__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "op",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Expression, op),
    &expression__operation__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "const",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Expression, const_),
    &expression__constant__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned expression__field_indices_by_name[] = {
  2,   /* field[2] = const */
  1,   /* field[1] = op */
  0,   /* field[0] = var */
};
static const ProtobufCIntRange expression__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor expression__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Expression",
  "Expression",
  "Expression",
  "",
  sizeof(Expression),
  3,
  expression__field_descriptors,
  expression__field_indices_by_name,
  1,  expression__number_ranges,
  (ProtobufCMessageInit) expression__init,
  NULL,NULL,NULL    /* reserved[123] */
};
