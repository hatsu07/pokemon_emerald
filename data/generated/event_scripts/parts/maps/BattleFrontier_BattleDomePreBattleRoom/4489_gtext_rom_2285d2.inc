	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:323 BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals
	.globl gText_Rom_2285D2
gText_Rom_2285D2: @ 0x082285D2
	.string "じゅんけっしょう しんしゅつ\nおめでとう ございます\pさあ ベスト4の げきとつです\nじゅんびの ほうは いかがですか?$"
	.if (. - gText_Rom_2285D2) > 0x3d
	.error "gText_Rom_2285D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2285D2) < 0x3d
	.space 0x3d - (. - gText_Rom_2285D2)
	.endif
