	@ asm/berry_tag_screen.s:1756 GetEventLoadMessage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CD19F
gText_Rom_5CD19F: @ 0x085CD19F
	.string "エラーがはっせいしました\nしゅうりょうします$"
	.if (. - gText_Rom_5CD19F) != 0x17
	.error "gText_Rom_5CD19F must retain its original byte length"
	.endif
