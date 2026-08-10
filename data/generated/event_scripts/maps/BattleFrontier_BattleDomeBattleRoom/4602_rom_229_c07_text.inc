	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1145 BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter
	.globl gText_Rom_229C07
gText_Rom_229C07: @ 0x08229C07
	.string "つよく! なにより かわいい キミっ!!\pキミには わたしの ような\nスーパースターに なれる\lかのうせいを かんじるよっ!\lまた あえるときを たのしみに しようっ!!$"
	.if (. - gText_Rom_229C07) > 0x56
	.error "gText_Rom_229C07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229C07) < 0x56
	.space 0x56 - (. - gText_Rom_229C07)
	.endif
	@ analyzed canonical ROM range 0x08229C5D-0x08229CB6
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08229C5D: @ 0x08229C5D
	.string "バトルトーナメント　レベル50\nゆうしょうは　{PLAYER}さんっ!\pおめでとう　ございます!!$"
EventText_JP_08229C89: @ 0x08229C89
	.string "バトルトーナメント　オープンレベル\nゆうしょうは　{PLAYER}さんっ!\pおめでとう　ございます!!$"
