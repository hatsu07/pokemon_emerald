	@ data/text/apprentice.inc:196 gText_ApprenticeRejectTeaching12
	.globl gText_Rom_26E4B1
gText_Rom_26E4B1: @ 0x0826E4B1
	.string "って ことわられてる オレっ!?\nしかたねー もういちど たのんでみる!?\pおねがい だよ {PLAYER}さん!\nオレを でしに してエェ!!"
	.byte EOS
	.if (. - gText_Rom_26E4B1) > 0x43
	.error "gText_Rom_26E4B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E4B1) < 0x43
	.space 0x43 - (. - gText_Rom_26E4B1)
	.endif
