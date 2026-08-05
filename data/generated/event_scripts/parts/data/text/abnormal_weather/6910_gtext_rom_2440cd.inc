	@ data/text/abnormal_weather.inc:4 gText_AbnormalWeatherEnded_Sun
	.globl gText_Rom_2440CD
gText_Rom_2440CD: @ 0x082440CD
	.string "ひでりは おさまったようだ……$"
	.if (. - gText_Rom_2440CD) > 0x10
	.error "gText_Rom_2440CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2440CD) < 0x10
	.space 0x10 - (. - gText_Rom_2440CD)
	.endif
