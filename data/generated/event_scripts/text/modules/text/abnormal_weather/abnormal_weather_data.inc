	@ data/text/abnormal_weather.inc:1 gText_AbnormalWeatherEnded_Rain
	.globl gText_AbnormalWeatherEnded_Rain
gText_AbnormalWeatherEnded_Rain: @ 0x082440BC
	.string "おおあめは おさまったようだ……{EOS}"
	.if (. - gText_AbnormalWeatherEnded_Rain) > 0x11
	.error "gText_AbnormalWeatherEnded_Rain may not grow beyond its original slot"
	.endif
	.if (. - gText_AbnormalWeatherEnded_Rain) < 0x11
	.space 0x11 - (. - gText_AbnormalWeatherEnded_Rain)
	.endif

	@ data/text/abnormal_weather.inc:4 gText_AbnormalWeatherEnded_Sun
	.globl gText_AbnormalWeatherEnded_Sun
gText_AbnormalWeatherEnded_Sun: @ 0x082440CD
	.string "ひでりは おさまったようだ……{EOS}"
	.if (. - gText_AbnormalWeatherEnded_Sun) > 0x10
	.error "gText_AbnormalWeatherEnded_Sun may not grow beyond its original slot"
	.endif
	.if (. - gText_AbnormalWeatherEnded_Sun) < 0x10
	.space 0x10 - (. - gText_AbnormalWeatherEnded_Sun)
	.endif
