	@ src/use_pokeblock.c:163 sText_NatureSlash
	.globl gText_Rom_5CB7A2
gText_Rom_5CB7A2: @ 0x085CB7A2
	.string "せいかく/$"
	.if (. - gText_Rom_5CB7A2) > 0x6
	.error "gText_Rom_5CB7A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7A2) < 0x6
	.space 0x6 - (. - gText_Rom_5CB7A2)
	.endif
	.globl gUnknown_85CB7A8
gUnknown_85CB7A8: @ 0x085CB7A8

	@ src/pokenav_match_call_gfx.c:129 gText_TrainerCloseBy
	.globl gText_Rom_5CB7A8
gText_Rom_5CB7A8: @ 0x085CB7A8
	.string "ちかくに いるみたいだから\nちょくせつ あって はなそう!$"
	.if (. - gText_Rom_5CB7A8) > 0x1e
	.error "gText_Rom_5CB7A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7A8) < 0x1e
	.space 0x1e - (. - gText_Rom_5CB7A8)
	.endif
	.globl gUnknown_85CB7C6
gUnknown_85CB7C6: @ 0x085CB7C6
	.incbin "baserom.gba", 0x5cb7c6, 0x3

