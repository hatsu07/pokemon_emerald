	@ data/maps/MtChimney/scripts.inc:647 MtChimney_Text_YouBetterNotMessWithUs
	.globl gText_Rom_215463
gText_Rom_215463: @ 0x08215463
	.string "オレたちの じゃまを するな!\pアイツを ふっかつ させるのは\nみんなの ために やってること なんだ!$"
	.if (. - gText_Rom_215463) > 0x35
	.error "gText_Rom_215463 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215463) < 0x35
	.space 0x35 - (. - gText_Rom_215463)
	.endif
