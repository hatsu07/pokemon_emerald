	@ data/text/secret_base_trainers.inc:115 SecretBase_Text_Trainer3DeclineBattle
	.globl gText_Rom_245729
gText_Rom_245729: @ 0x08245729
	.string "もしかして さがすのに つかれちゃった?$"
	.if (. - gText_Rom_245729) > 0x15
	.error "gText_Rom_245729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245729) < 0x15
	.space 0x15 - (. - gText_Rom_245729)
	.endif
