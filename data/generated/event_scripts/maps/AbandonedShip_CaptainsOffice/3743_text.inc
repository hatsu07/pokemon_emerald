	@ data/maps/AbandonedShip_CaptainsOffice/scripts.inc:25 AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner
	.globl gText_Rom_21B270
gText_Rom_21B270: @ 0x0821B270
	.string "クスノキ かんちょうに たのまれてね\nこのふねの ちょうさを しているんだ\pついでに たんちきを さがしてきて\nほしいって いわれたんだけど\lみあたらないなあ……"
	.byte EOS
	.if (. - gText_Rom_21B270) > 0x52
	.error "gText_Rom_21B270 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B270) < 0x52
	.space 0x52 - (. - gText_Rom_21B270)
	.endif
