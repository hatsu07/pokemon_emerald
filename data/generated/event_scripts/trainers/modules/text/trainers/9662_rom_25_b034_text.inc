	@ data/text/trainers.inc:641 Route109_Text_LolaRematchIntro (+1 aliases)
	.globl gText_Rom_25B034
gText_Rom_25B034: @ 0x0825B034
	.string "もう あなたには まけません!\nそのために うきわ してるんだから!{EOS}"
	.if (. - gText_Rom_25B034) > 0x23
	.error "gText_Rom_25B034 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B034) < 0x23
	.space 0x23 - (. - gText_Rom_25B034)
	.endif
