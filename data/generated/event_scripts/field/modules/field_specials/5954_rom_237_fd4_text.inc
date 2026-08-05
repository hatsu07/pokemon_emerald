	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237FD4
gText_Rom_237FD4: @ 0x08237FD4
	.string "サクサクッと\nバトルタワーの　シングル　バトルルームに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_237FD4) > 0x56
	.error "gText_Rom_237FD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237FD4) < 0x56
	.space 0x56 - (. - gText_Rom_237FD4)
	.endif
