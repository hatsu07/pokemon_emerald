	@ data/text/trainers.inc:2348 Route121_Text_CristinRegister
	.globl gText_Rom_25F7AE
gText_Rom_25F7AE: @ 0x0825F7AE
	.string "くつじょく てき だわ!\nあなたの こと わすれないんだから……\lポケナビを かしなさい!{EOS}"
	.if (. - gText_Rom_25F7AE) > 0x2e
	.error "gText_Rom_25F7AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F7AE) < 0x2e
	.space 0x2e - (. - gText_Rom_25F7AE)
	.endif
