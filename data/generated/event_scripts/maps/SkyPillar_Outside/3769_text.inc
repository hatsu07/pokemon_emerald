	@ data/maps/SkyPillar_Outside/scripts.inc:145 SkyPillar_Outside_Text_EarthquakeNotMomentToWaste
	.globl gText_Rom_21BDB5
gText_Rom_21BDB5: @ 0x0821BDB5
	.string "ミクリ『じしんだ!\pこうしては いられない\nさきを いそごう!"
	.byte EOS
	.if (. - gText_Rom_21BDB5) > 0x20
	.error "gText_Rom_21BDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BDB5) < 0x20
	.space 0x20 - (. - gText_Rom_21BDB5)
	.endif
