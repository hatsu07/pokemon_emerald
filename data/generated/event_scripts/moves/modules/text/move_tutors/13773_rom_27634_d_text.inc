	@ data/text/move_tutors.inc:110 MoveTutor_Text_SleepTalkTeach
	.globl gText_Rom_27634D
gText_Rom_27634D: @ 0x0827634D
	.string "ふん…… ばあさんめ\nめざめるパワー などに\lたより おって……\pワシと いっしょに おひるね して\nねごとでも いってたほうが たのしいのに\pもう あんたの ポケモンでも ええわ\nねごとを おぼえて つかってみんか?{EOS}"
	.if (. - gText_Rom_27634D) > 0x6e
	.error "gText_Rom_27634D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27634D) < 0x6e
	.space 0x6e - (. - gText_Rom_27634D)
	.endif
