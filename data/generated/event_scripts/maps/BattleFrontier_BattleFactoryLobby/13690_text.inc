	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:536 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules (+1 aliases)
	.globl gText_Rom_275803
gText_Rom_275803: @ 0x08275803
	.string "トレードを おこなう ときには\n2つ ちゅういする ことが あります\pその1 トレードを おこなう ときは\nあいてから うけとる ポケモンの\lつよさは かくにん できません\pその2 ちょうせんを はじめた ときに\nかりた レンタルポケモンの じゅんばんが\lトレードの あとの たたかいにも\lひきつがれます$"
	.if (. - gText_Rom_275803) > 0x99
	.error "gText_Rom_275803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275803) < 0x99
	.space 0x99 - (. - gText_Rom_275803)
	.endif
