	@ data/text/battle_tent.inc:405 VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules
	.globl gText_Rom_2759F5
gText_Rom_2759F5: @ 0x082759F5
	.string "あいてに むかって じぶんから\nちょくせつ ダメージを あたえる\lこうげきの わざ\pたたかいの じゅんびや キズついた からだの\nかいふくを する ぼうぎょの わざ\pあいての のうりょくを さげたり\nどくや まひに したり など\lすこし かわった ことを する わざ\pポケモンは すべての わざを\nおおきく 3つの しゅるいに わけて\lどんな わざを だすか かんがえて います{EOS}"
	.if (. - gText_Rom_2759F5) > 0xbe
	.error "gText_Rom_2759F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2759F5) < 0xbe
	.space 0xbe - (. - gText_Rom_2759F5)
	.endif
