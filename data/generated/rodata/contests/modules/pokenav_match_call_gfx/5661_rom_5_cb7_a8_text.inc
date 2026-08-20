	@ src/pokenav_match_call_gfx.c:129 gText_TrainerCloseBy
	.globl gText_Rom_5CB7A8
gText_Rom_5CB7A8: @ 0x085CB7A8
	.string "ちかくに いるみたいだから\nちょくせつ あって はなそう!{EOS}"
	.if (. - gText_Rom_5CB7A8) > 0x1e
	.error "gText_Rom_5CB7A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7A8) < 0x1e
	.space 0x1e - (. - gText_Rom_5CB7A8)
	.endif
