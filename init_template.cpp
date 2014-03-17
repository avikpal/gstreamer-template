//Creating a pad and dataflow through pad
static void
gst_my_filter_init (GstMyFilter *filter)
{
  /* pad through which data comes in to the element */
  filter->sinkpad = gst_pad_new_from_static_template (
	&sink_template, "sink");
  /* pads are configured here with gst_pad_set_*_function () */



  gst_element_add_pad (GST_ELEMENT (filter), filter->sinkpad);

  /* pad through which data goes out of the element */
  filter->srcpad = gst_pad_new_from_static_template (
	&src_template, "src");
  /* pads are configured here with gst_pad_set_*_function () */



  gst_element_add_pad (GST_ELEMENT (filter), filter->srcpad);

  /* properties initial value */
  filter->silent = FALSE;
}
