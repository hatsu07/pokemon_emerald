	@ data/text/cable_club.inc:268 CableClub_Text_UnionRoomInfo
	.globl gText_Rom_2486D6
gText_Rom_2486D6: @ 0x082486D6
	.string "ユニオン ルーム は あなたの\nちかくで ユニオン ルームに\lはいっている ひとが あらわれます\pかんたんな あいさつをしたり\pレベル30までの ポケモン2ひきで\n1たい1の たいせん\p2にんから 5にんまで どうじに\nおしゃべりが できる チャット\pそして とうろくしき\nポケモン こうかんが たのしめます\pへやに はいりますか?$"
	.if (. - gText_Rom_2486D6) > 0xa7
	.error "gText_Rom_2486D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2486D6) < 0xa7
	.space 0xa7 - (. - gText_Rom_2486D6)
	.endif
