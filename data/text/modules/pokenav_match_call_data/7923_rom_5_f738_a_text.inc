	@ src/pokenav_match_call_data.c:184 pokenav_match_call_data_line_184
	.globl gText_Rom_5F737C
gText_Rom_5F737C: @ 0x085F737C
	.string "デボンしゃちょう{EOS}"
	.if (. - gText_Rom_5F737C) > 0x9
	.error "gText_Rom_5F737C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F737C) < 0x9
	.space 0x9 - (. - gText_Rom_5F737C)
	.endif
	@ src/pokenav_match_call_data.c:185 pokenav_match_call_data_line_185
	.globl gText_Rom_5F7385
gText_Rom_5F7385: @ 0x085F7385
	.string "ツワブキ{EOS}"
	.if (. - gText_Rom_5F7385) > 0x5
	.error "gText_Rom_5F7385 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7385) < 0x5
	.space 0x5 - (. - gText_Rom_5F7385)
	.endif
	@ src/pokenav_match_call_data.c:260 pokenav_match_call_data_line_260
	.globl gText_Rom_5F738A
gText_Rom_5F738A: @ 0x085F738A
	.string "いしがかたいひと{EOS}"
	.if (. - gText_Rom_5F738A) > 0x9
	.error "gText_Rom_5F738A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F738A) < 0x9
	.space 0x9 - (. - gText_Rom_5F738A)
	.endif

