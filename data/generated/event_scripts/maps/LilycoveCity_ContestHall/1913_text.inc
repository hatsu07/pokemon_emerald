	@ data/maps/LilycoveCity_ContestHall/scripts.inc:322 LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous
	.globl gText_Rom_207B8A
gText_Rom_207B8A: @ 0x08207B8A
	.string "かーっ ひろいね ここは！\nいなかの コンテスト かいじょう とは\lきんちょうかんが ちがうね！{EOS}"
	.if (. - gText_Rom_207B8A) > 0x31
	.error "gText_Rom_207B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207B8A) < 0x31
	.space 0x31 - (. - gText_Rom_207B8A)
	.endif
