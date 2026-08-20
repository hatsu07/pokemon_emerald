	@ data/maps/Route110/scripts.inc:741 Route110_Text_WeCantTalkAboutAquaActivities
	.globl gText_Rom_1E973D
gText_Rom_1E973D: @ 0x081E973D
	.string "アクアだんの かつどうは\nいまは まだ だれにも いえないのだ{EOS}"
	.if (. - gText_Rom_1E973D) > 0x20
	.error "gText_Rom_1E973D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E973D) < 0x20
	.space 0x20 - (. - gText_Rom_1E973D)
	.endif
