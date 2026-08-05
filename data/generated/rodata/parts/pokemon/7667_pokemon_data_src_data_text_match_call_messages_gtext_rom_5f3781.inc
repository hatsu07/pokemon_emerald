	@ src/data/text/match_call_messages.h:342 gText_MatchCallPassionBurn_Flannery_Pokemon
	.globl gText_Rom_5F3781
gText_Rom_5F3781: @ 0x085F3781
	.string "もえろ じょうねつの ほのお!$"
	.if (. - gText_Rom_5F3781) > 0x10
	.error "gText_Rom_5F3781 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3781) < 0x10
	.space 0x10 - (. - gText_Rom_5F3781)
	.endif
