	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:709 Route110_TrickHouseEntrance_Text_ConealedBeyondWindow
	.globl gText_Rom_23D2DE
gText_Rom_23D2DE: @ 0x0823D2DE
	.string "む むむ…!\pなぜ わがはいが まどの むこうに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D2DE) > 0x2e
	.error "gText_Rom_23D2DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D2DE) < 0x2e
	.space 0x2e - (. - gText_Rom_23D2DE)
	.endif
