	@ data/maps/EverGrandeCity_GlaciasRoom/scripts.inc:61 EverGrandeCity_GlaciasRoom_Text_IntroSpeech
	.globl gText_Rom_2105BD
gText_Rom_2105BD: @ 0x082105BD
	.string "ようこそ\nしてんのうの プリムと いいます\pこおりの わざを きわめたくて\nはるか ホウエンまで やって きました\pですが ここに ちょうせんに くるのは\nやわな トレーナーと ポケモンばかり……\pあなたは どう?\pほんきを だしても だいじょうぶ だと\nうれしいの ですが……!!{EOS}"
	.if (. - gText_Rom_2105BD) > 0x8e
	.error "gText_Rom_2105BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2105BD) < 0x8e
	.space 0x8e - (. - gText_Rom_2105BD)
	.endif
