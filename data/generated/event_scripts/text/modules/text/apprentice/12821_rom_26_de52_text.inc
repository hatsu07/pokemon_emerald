	@ data/text/apprentice.inc:151 gText_ApprenticeWhichLevelMode8
	.globl gText_Rom_26DE52
gText_Rom_26DE52: @ 0x0826DE52
	.string "ひええええぇ! {PLAYER}さんに\nはい って いわれたああぁ!!\lきょうは もう ねむれない……\lおありがとう ございますう!\pではっ うかがいます!\nわたしは バトルタワー\lレベル50のへやと オープンレベルのへや\lどちらに むいてると おもわれますかっ?"
	.byte EOS
	.if (. - gText_Rom_26DE52) > 0x7f
	.error "gText_Rom_26DE52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DE52) < 0x7f
	.space 0x7f - (. - gText_Rom_26DE52)
	.endif
