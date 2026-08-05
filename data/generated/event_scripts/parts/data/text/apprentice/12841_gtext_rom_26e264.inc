	@ data/text/apprentice.inc:181 gText_ApprenticePleaseTeach11
	.globl gText_Rom_26E264
gText_Rom_26E264: @ 0x0826E264
	.string "は・じ・め・ま・し・て!\nはーい はじめまして!\lわし ノリノリ ふなのり {STR_VAR_1}!\lきみも じこしょうかい いってみようぜ!\pふん ふん なまえは {PLAYER}{KUN}!\nポケモン だいすきで\lびみょうな おとしごろね!\pじつは きみは わしが はなしかけた\nほんじつ 10にんめの トレーナーでーす!\pこの であいを きねんして\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_Rom_26E264) > 0xb5
	.error "gText_Rom_26E264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E264) < 0xb5
	.space 0xb5 - (. - gText_Rom_26E264)
	.endif
