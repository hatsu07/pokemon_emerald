	@ data/text/apprentice.inc:340 gText_ApprenticeThanksHeldItem6
	.globl gText_Rom_26F2F6
gText_Rom_26F2F6: @ 0x0826F2F6
	.string "ははぁーん!\n{STR_VAR_1}とは シブイわぁ\lぜひ そうして みるね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26F2F6) > 0x47
	.error "gText_Rom_26F2F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2F6) < 0x47
	.space 0x47 - (. - gText_Rom_26F2F6)
	.endif
