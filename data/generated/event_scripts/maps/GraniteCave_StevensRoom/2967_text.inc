	@ data/maps/GraniteCave_StevensRoom/scripts.inc:85 GraniteCave_StevensRoom_Text_ThankYouTakeThis
	.globl gText_Rom_214146
gText_Rom_214146: @ 0x08214146
	.string "ダイゴ『うん ありがとう\pわざわざ とどけて くれたんだ\nなにか おれいを させてもらうよ\pそうだね\nこの わざマシンを あげよう\pはがねのつばさ といって\nボクの おきにいりの わざ だから{EOS}"
	.if (. - gText_Rom_214146) > 0x61
	.error "gText_Rom_214146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214146) < 0x61
	.space 0x61 - (. - gText_Rom_214146)
	.endif
