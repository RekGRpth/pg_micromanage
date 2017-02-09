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
static const ProtobufCFieldDescriptor sequence_scan__field_descriptors[1] =
{
  {
    "table",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(SequenceScan, table),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned sequence_scan__field_indices_by_name[] = {
  0,   /* field[0] = table */
};
static const ProtobufCIntRange sequence_scan__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor sequence_scan__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "SequenceScan",
  "SequenceScan",
  "SequenceScan",
  "",
  sizeof(SequenceScan),
  1,
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