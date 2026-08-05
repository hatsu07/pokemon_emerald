	@ data/text/cable_club.inc:277 CableClub_Text_ExplainWirelessClubFirstTime
	.globl gText_Rom_2487F6
gText_Rom_2487F6: @ 0x082487F6
	.string "こちら 2かいには\nふたつの おへやが ございます\pひとつめは ひだりがわの おへや\nユニオン ルーム!\pあなたの ちかくで\nユニオン ルームに はいっている\lみしらぬ おともだちと\lいろいろな コミュニケーションが\lたのしめます!\pふたつめは みぎがわの おへや\nダイレクト コーナー!\pあなたの しっている おともだちと\nポケモンの こうかんや\lたいせん などを\lたのしむ ことが できます!\pもし ワイヤレスアダプタが\nつながって いない ばあいでも\pみぎがわの おへやで\nケーブル つうしんが たのしめます\pそれでは\pワイヤレス つうしんを\nたのしんで くださいね!$"
	.if (. - gText_Rom_2487F6) > 0x120
	.error "gText_Rom_2487F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2487F6) < 0x120
	.space 0x120 - (. - gText_Rom_2487F6)
	.endif
