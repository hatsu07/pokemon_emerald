	@ src/pokenav_match_call_gfx.c:129 gText_TrainerCloseBy
	.globl gText_TrainerCloseBy
gText_TrainerCloseBy: @ 0x085CB7A8
	.string "ちかくに いるみたいだから\nちょくせつ あって はなそう!{EOS}"
	.if (. - gText_TrainerCloseBy) > 0x1e
	.error "gText_TrainerCloseBy may not grow beyond its original slot"
	.endif
	.if (. - gText_TrainerCloseBy) < 0x1e
	.space 0x1e - (. - gText_TrainerCloseBy)
	.endif
