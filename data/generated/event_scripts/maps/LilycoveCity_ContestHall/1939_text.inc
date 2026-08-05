	@ data/maps/LilycoveCity_ContestHall/scripts.inc:361 LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty
	.globl gText_Rom_207E5B
gText_Rom_207E5B: @ 0x08207E5B
	.string "こんなに うつくしい ポケモン\nほかに いないわよ ねえ\pみんなの めを くぎづけに しちゃうわ！$"
	.if (. - gText_Rom_207E5B) > 0x32
	.error "gText_Rom_207E5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207E5B) < 0x32
	.space 0x32 - (. - gText_Rom_207E5B)
	.endif
