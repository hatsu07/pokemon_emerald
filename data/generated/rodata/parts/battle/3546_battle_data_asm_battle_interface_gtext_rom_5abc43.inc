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
