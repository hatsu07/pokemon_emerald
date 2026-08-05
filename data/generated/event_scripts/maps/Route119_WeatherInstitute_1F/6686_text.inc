	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:94 Route119_WeatherInstitute_1F_Text_Grunt4PostBattle
	.globl gText_Rom_241358
gText_Rom_241358: @ 0x08241358
	.string "あらら……\nこどもに まけたら おこられちゃう……\pベッドで ねてようかしら?$"
	.if (. - gText_Rom_241358) > 0x28
	.error "gText_Rom_241358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241358) < 0x28
	.space 0x28 - (. - gText_Rom_241358)
	.endif
