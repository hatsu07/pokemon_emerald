	@ data/text/abnormal_weather.inc:1 gText_AbnormalWeatherEnded_Rain
	.globl gText_Rom_2440BC
gText_Rom_2440BC: @ 0x082440BC
	.string "おおあめは おさまったようだ……$"
	.if (. - gText_Rom_2440BC) > 0x11
	.error "gText_Rom_2440BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2440BC) < 0x11
	.space 0x11 - (. - gText_Rom_2440BC)
	.endif
