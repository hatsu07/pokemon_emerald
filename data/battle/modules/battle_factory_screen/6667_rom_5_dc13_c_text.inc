	@ asm/battle_factory_screen.s:8862 sub_0819E7FC
	.globl gText_Rom_5DC13C
gText_Rom_5DC13C: @ 0x085DC13C
	.string "　　　　{EOS}"
	.if (. - gText_Rom_5DC13C) > 0x5
	.error "gText_Rom_5DC13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC13C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC13C)
	.endif
