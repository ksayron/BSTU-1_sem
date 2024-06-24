<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>task1</title>
</head>
<body>
<table border="1">
<tr bgcolor="#9acd32">
<th>Студент</th>
<th>Оценка</th></tr>
<xsl:for-each select="storage/goods">
<xsl:sort select="name"/>
<tr>
<td><xsl:value-of select="name"/></td>
<xsl:choose>
  <xsl:when test="price &gt; 8">
  <td bgcolor="green">
  <xsl:value-of select="price"/></td>
  </xsl:when>
  <xsl:when test="price &lt; 4">
  <td bgcolor="red">
  <xsl:value-of select="price"/></td>
  </xsl:when>
  <xsl:otherwise>
  <td><xsl:value-of select="price"/></td>
  </xsl:otherwise>
 </xsl:choose>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>