	@ data/maps/LilycoveCity_House3/scripts.inc:115 LilycoveCity_House3_Text_LikeMixingAtRecordCorner
	.globl gText_Rom_20A4B2
gText_Rom_20A4B2: @ 0x0820A4B2
	.string "レコードコーナーで まぜまくる！\nって なにが まざってるんだ?$"
	.if (. - gText_Rom_20A4B2) > 0x21
	.error "gText_Rom_20A4B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A4B2) < 0x21
	.space 0x21 - (. - gText_Rom_20A4B2)
	.endif
