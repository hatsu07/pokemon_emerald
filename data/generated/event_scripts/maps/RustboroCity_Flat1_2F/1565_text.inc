	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:114 RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper
	.globl gText_Rom_203B01
gText_Rom_203B01: @ 0x08203B01
	.string "ありがとう!\pきみの おかげで アヤノが\nわらって くれたよ!\pじつは おじさん\nこう みえても\pデボンコーポレーションの\nすごうで けんきゅういん なんだよ\pそうだなー じゃあ おれいに\nきみが ポケモンを あずけている\lボックスの かべがみを\lふやして あげよう!\pかべがみの なかから\n「だいすき」って いうのを えらぶと\lあたらしい かべがみが えらべるよ!$"
	.if (. - gText_Rom_203B01) > 0xb8
	.error "gText_Rom_203B01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203B01) < 0xb8
	.space 0xb8 - (. - gText_Rom_203B01)
	.endif
