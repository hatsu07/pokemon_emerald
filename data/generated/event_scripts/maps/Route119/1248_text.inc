	@ data/maps/Route119/scripts.inc:536 Route119_Text_ScottWayToGoBeSeeingYou
	.globl gText_Rom_1ED524
gText_Rom_1ED524: @ 0x081ED524
	.string "エニシダ『うふふ!\nやるねえ {PLAYER}{KUN}……!\pいま じてんしゃに のった トレーナーと\nすれちがったん だけどさ\lきみ あのトレーナーに かったんだろ?\lわかるよー!\pだって あのコ まっかな かおして\nすっごく くやしそう だったからね!\pそれにしても きみとは\nいろいろな ところで あうね!\lこの あとは ヒワマキジムに いくのかな?\pジムせんも きたい してるよ!\nじゃ また あおうね!{EOS}"
	.if (. - gText_Rom_1ED524) > 0xc7
	.error "gText_Rom_1ED524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED524) < 0xc7
	.space 0xc7 - (. - gText_Rom_1ED524)
	.endif
