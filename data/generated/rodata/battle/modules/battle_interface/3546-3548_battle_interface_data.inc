	@ asm/battle_interface.s:4834 sub_08074320
	.globl gText_Rom_5ABC43
gText_Rom_5ABC43: @ 0x085ABC43
	.string "{HIGHLIGHT}{0x02}のこり　$"
	.if (. - gText_Rom_5ABC43) > 0x8
	.error "gText_Rom_5ABC43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC43) < 0x8
	.space 0x8 - (. - gText_Rom_5ABC43)
	.endif

	@ asm/battle_interface.s:4844 sub_08074320
	.globl gText_Rom_5ABC4B
gText_Rom_5ABC4B: @ 0x085ABC4B
	.string "{HIGHLIGHT}{0x02}こ$"
	.if (. - gText_Rom_5ABC4B) > 0x5
	.error "gText_Rom_5ABC4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC4B) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC4B)
	.endif
