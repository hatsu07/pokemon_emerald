	@ data/text/secret_base_trainers.inc:172 SecretBase_Text_Trainer9Defeated
	.globl gText_Rom_245A06
gText_Rom_245A06: @ 0x08245A06
	.string "すごい さいのうね!\nそこしれぬ つよさを かんじたわ……$"
	.if (. - gText_Rom_245A06) > 0x1e
	.error "gText_Rom_245A06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A06) < 0x1e
	.space 0x1e - (. - gText_Rom_245A06)
	.endif
