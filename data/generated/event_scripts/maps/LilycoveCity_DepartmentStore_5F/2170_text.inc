	@ data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc:151 LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere
	.globl gText_Rom_20ADFE
gText_Rom_20ADFE: @ 0x0820ADFE
	.string "かわいい マットが たくさん うってるの!\nどれを かおうかな……\lぜーんぶ かっちゃおうかな……$"
	.if (. - gText_Rom_20ADFE) > 0x32
	.error "gText_Rom_20ADFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ADFE) < 0x32
	.space 0x32 - (. - gText_Rom_20ADFE)
	.endif
