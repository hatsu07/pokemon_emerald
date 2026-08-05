	@ data/maps/VerdanturfTown/scripts.inc:79 VerdanturfTown_Text_EasyToGetToRustboroNow
	.globl gText_Rom_1E62B6
gText_Rom_1E62B6: @ 0x081E62B6
	.string "フレンドリィ ショップの となりの\nどうくつが とおれるように なっただろ!\pカナズミまで デボンの しんせいひんを\nかいに いきやすくなって うれしいよ!$"
	.if (. - gText_Rom_1E62B6) > 0x4f
	.error "gText_Rom_1E62B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E62B6) < 0x4f
	.space 0x4f - (. - gText_Rom_1E62B6)
	.endif
