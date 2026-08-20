	@ data/maps/LilycoveCity_ContestHall/scripts.inc:406 LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest
	.globl gText_Rom_208184
gText_Rom_208184: @ 0x08208184
	.string "ワシは あの おんなのこが\nいちばん かわいいと おもうな……\pえっ? ポケモンの みためを\nくらべてるんか！?{EOS}"
	.if (. - gText_Rom_208184) > 0x39
	.error "gText_Rom_208184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208184) < 0x39
	.space 0x39 - (. - gText_Rom_208184)
	.endif
