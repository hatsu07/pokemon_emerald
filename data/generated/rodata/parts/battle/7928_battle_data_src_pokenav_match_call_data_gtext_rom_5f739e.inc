	@ src/pokenav_match_call_data.c:208 pokenav_match_call_data_line_208
	.globl gText_Rom_5F739E
gText_Rom_5F739E: @ 0x085F739E
	.string "つよくてたのもしい$"
	.if (. - gText_Rom_5F739E) > 0xa
	.error "gText_Rom_5F739E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F739E) < 0xa
	.space 0xa - (. - gText_Rom_5F739E)
	.endif
